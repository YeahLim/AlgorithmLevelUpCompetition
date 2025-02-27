import sys
input = sys.stdin.readline

def restore_ipv6(address):
    if '::' in address:
        left, right = address.split('::')
        left_blocks = left.split(':') if left else []
        right_blocks = right.split(':') if right else []
    else:
        left_blocks = address.split(':')
        right_blocks = []

    blocks = [block for block in left_blocks if block] + [block for block in right_blocks if block]

    total_blocks = len(blocks)
    zero_blocks = 8 - total_blocks

    result = []
    i = 0
    for part in address.split('::'):
        if i > 0:
            result.extend(['0000'] * zero_blocks)
        if part:
            for block in part.split(':'):
                result.append(block.zfill(4))
        i += 1

    return ':'.join(result[:8])


address = input().strip()
print(restore_ipv6(address))