//
//  MainViewController.m
//  imageEditing
//
//  Created by Roshan Mishra on 08/05/19.
//  Copyright © 2019 Chroma. All rights reserved.
//

#import "MainViewController.h"
#import "cropping/NKCropViewController.h"

@interface MainViewController ()<NKCropViewControllerDelegate>

@end

@implementation MainViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)brightnessAction:(id)sender {

    
}
- (IBAction)croppingAction:(id)sender {
    
    NKCropViewController *croppingVC = [[NKCropViewController alloc] init];
    croppingVC.delegate = self;
    croppingVC.image = [UIImage imageNamed:@"Iron-Man"];
    [self.navigationController pushViewController:croppingVC animated:YES];
    
}
- (IBAction)filterAction:(id)sender {
}
- (IBAction)inclineAction:(id)sender {
}
- (IBAction)resizeAction:(id)sender {
}
- (IBAction)scalingAction:(id)sender {
}

#pragma mark - NKCropViewControllerDelegate methods

- (void)cropViewController:(NKCropViewController *)controller didFinishCroppingImage:(UIImage *)croppedImage transform:(CGAffineTransform)transform cropRect:(CGRect)cropRect
{
    [controller dismissViewControllerAnimated:YES completion:NULL];
    //self.imageView.image = croppedImage;
    if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad) {
        //[self updateEditButtonEnabled];
    }
}

- (void)cropViewControllerDidCancel:(NKCropViewController *)controller
{
    
    [controller dismissViewControllerAnimated:YES completion:NULL];
}



@end
