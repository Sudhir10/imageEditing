//
//  UIImage+NKCrop.h
//  Image Crop
//
//  Created by Pradip on 2019/05/13.
//  Copyright © 2019 HCL Technology Pvt Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (NKCrop)

- (UIImage *)rotatedImageWithtransform:(CGAffineTransform)rotation
                         croppedToRect:(CGRect)rect;

@end
