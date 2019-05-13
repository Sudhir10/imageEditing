//
//  NKCropRectView.h
//  Image Crop
//
//  Created by Pradip on 2019/05/13.
//  Copyright © 2019 HCL Technology Pvt Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol NKCropRectViewDelegate;

@interface NKCropRectView : UIView

@property (nonatomic, weak) id<NKCropRectViewDelegate> delegate;
@property (nonatomic) BOOL showsGridMajor;
@property (nonatomic) BOOL showsGridMinor;

@property (nonatomic) BOOL keepingAspectRatio;

@end

@protocol NKCropRectViewDelegate <NSObject>

- (void)cropRectViewDidBeginEditing:(NKCropRectView *)cropRectView;
- (void)cropRectViewEditingChanged:(NKCropRectView *)cropRectView;
- (void)cropRectViewDidEndEditing:(NKCropRectView *)cropRectView;

@end

