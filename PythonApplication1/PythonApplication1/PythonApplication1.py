import logging

logger = logging.getLogger(__name__)
logger.setLevel(logging.DEBUG)
try:
    formatter = logging.Formatter('%(asctime)s:%(name)s:%(message)s')
except:
    print("An exception occurred")

file_handler = logging.FileHandler('sample.log')
file_handler.setLevel(logging.ERROR)
file_handler.setFormatter(formatter)

stream_handler = logging.StreamHandler()
stream_handler.setFormatter(formatter)

logger.addHandler(file_handler)
logger.addHandler(stream_handler)

#code

def sum(x, y):
    return x+y

def diff(x,y):
    return x-y

def div(x, y):
    try:
        result = x / y
    except ZeroDivisionError:
        logger.exception('Tried to divide by zero')
    else:
        return result

x=10
y=0

Sum = sum(x, y)
logger.debug("the sum of {} and {} = {}".format(x,y,Sum))

Diffe = diff(x, y)
logger.debug("the diff of {} and {} = {}".format(x,y,Diffe))

Div = div(x, y)
logger.debug("the div of {} and {} = {}".format(x,y,Div))



