#!/usr/bin/python3
""" method canUnlockAll(boxes) """


def canUnlockAll(boxes):
    """ method that determines if all the boxes can be opened  """
    listBoxes = [0]
    for box in listBoxes:
        for key in boxes[box]:
            if key < len(boxes) and key not in listBoxes:
                register.append(key)
    if len(listBoxes) == len(boxes):
        return True
    return False
