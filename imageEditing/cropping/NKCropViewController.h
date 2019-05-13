//
//  NKCropViewController.h
//  Image Crop
//
//  Created by Pradip on 2019/05/13.
//  Copyright © 2019 HCL Technology Pvt Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol NKCropViewControllerDelegate;

@interface NKCropViewController : UIViewController

@property (nonatomic, weak) id<NKCropViewControllerDelegate> delegate;
@property (nonatomic) UIImage *image;

@property (nonatomic) BOOL keepingCropAspectRatio;
@property (nonatomic) CGFloat cropAspectRatio;

@property (nonatomic) CGRect cropRect;
@property (nonatomic) CGRect imageCropRect;

@property (nonatomic) BOOL toolbarHidden;

@property (nonatomic, assign, getter = isRotationEnabled) BOOL rotationEnabled;

@property (nonatomic, readonly) CGAffineTransform rotationTransform;

@property (nonatomic, readonly) CGRect zoomedCropRect;


- (void)resetCropRect;
- (void)resetCropRectAnimated:(BOOL)animated;

@end

@protocol NKCropViewControllerDelegate <NSObject>
@optional
- (void)cropViewController:(NKCropViewController *)controller didFinishCroppingImage:(UIImage *)croppedImage;
- (void)cropViewController:(NKCropViewController *)controller didFinishCroppingImage:(UIImage *)croppedImage transform:(CGAffineTransform)transform cropRect:(CGRect)cropRect;
- (void)cropViewControllerDidCancel:(NKCropViewController *)controller;

@end
