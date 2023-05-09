import cv2

img = cv2.imread("download.png")

b, g, r = cv2.split(img)

cv2.imshow('Blue part', b)
cv2.imshow('Green part', g)
cv2.imshow('Red part', r)
cv2.waitKey(0)

g[:] = 0
New_image = cv2.merge((r, g, b))

cv2.imshow('Only red and blue', New_image)
cv2.waitKey(0)

cv2.destroyAllWindows()
