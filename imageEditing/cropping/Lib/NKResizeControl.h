//
//  NKResizeControl.h
//  Image Crop
//
//  Created by Pradip on 2019/05/13.
//  Copyright © 2019 HCL Technology Pvt Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@protocol NKResizeControlViewDelegate;

@interface NKResizeControl : UIView

@property (nonatomic, weak) id<NKResizeControlViewDelegate> delegate;
@property (nonatomic, readonly) CGPoint translation;

@end

@protocol NKResizeControlViewDelegate <NSObject>

- (void)resizeControlViewDidBeginResizing:(NKResizeControl *)resizeControlView;
- (void)resizeControlViewDidResize:(NKResizeControl *)resizeControlView;
- (void)resizeControlViewDidEndResizing:(NKResizeControl *)resizeControlView;

@end
