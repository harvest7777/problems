class Solution:
    def checkOverlap(self, radius: int, xCenter: int, yCenter: int, x1: int, y1: int, x2: int, y2: int) -> bool:
        """
        find the point at which 2 lines intersect
        circle is y = +-sqrt(r^2-x^2)
        solve this for the squares y and x's then check if it is within range
        """
        # lets assume center is at 0,0 always
        x1 += (-xCenter)
        x2 += (-xCenter)
        y1 += (-yCenter)
        y2 += (-yCenter)
        xCenter = 0
        yCenter = 0

        def outOfRange(point, lowerBound,upperBound):
            return point < lowerBound or point > upperBound

        # is r^2 - x^2 an imaginary number? if it is, skip it.
        # if not, check if the y it lies on is within range of the square
        if radius*radius-x1*x1>= 0:
            y = (radius*radius-x1*x1)**0.5
            if not outOfRange(y, y1, y2):
                return True
            if not outOfRange(-y, y1, y2):
                return True

        if radius*radius-x2*x2>= 0:
            y = (radius*radius-x2*x2)**0.5
            if not outOfRange(y, y1, y2):
                return True
            if not outOfRange(-y, y1, y2):
                return True
        
        if radius*radius-y1*y1>= 0:
            x = (radius*radius-y1*y1)**0.5
            if not outOfRange(x, x1, x2):
                return True
            if not outOfRange(-x, x1, x2):
                return True
        
        if radius*radius-y2*y2>= 0:
            x = (radius*radius-y2*y2)**0.5
            if not outOfRange(x, x1, x2):
                return True
            if not outOfRange(-x, x1, x2):
                return True
        # circle is in the square
        if x1 < -radius and x2 > radius and y1 < -radius and y2 > radius:
            return True
        # rectangle is in the circle
        def pyth(x,y):
            return (x*x+y*y)**0.5
        if pyth(x1,y1) < radius and pyth(x1,y2) < radius and pyth(x2,y2) < radius and pyth(x2,y1) < radius:
            return True
        return False
