//
//  NKCropView.h
//  Image Crop
//
//  Created by Pradip on 2019/05/13.
//  Copyright © 2019 HCL Technology Pvt Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <AVFoundation/AVFoundation.h>

@interface NKCropView : UIView

@property (nonatomic) UIImage *image;
@property (nonatomic, readonly) UIImage *croppedImage;
@property (nonatomic, readonly) CGRect zoomedCropRect;
@property (nonatomic, readonly) CGAffineTransform rotation;
@property (nonatomic, readonly) BOOL userHasModifiedCropArea;

@property (nonatomic) BOOL keepingCropAspectRatio;
@property (nonatomic) CGFloat cropAspectRatio;

@property (nonatomic) CGRect cropRect;
@property (nonatomic) CGRect imageCropRect;

@property (nonatomic) CGFloat rotationAngle;

@property (nonatomic, weak, readonly) UIRotationGestureRecognizer *rotationGestureRecognizer;

- (void)resetCropRect;
- (void)resetCropRectAnimated:(BOOL)animated;

- (void)setRotationAngle:(CGFloat)rotationAngle snap:(BOOL)snap;

@end
