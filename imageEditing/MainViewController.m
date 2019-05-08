//
//  MainViewController.m
//  imageEditing
//
//  Created by Roshan Mishra on 08/05/19.
//  Copyright © 2019 Chroma. All rights reserved.
//

#import "MainViewController.h"

#import "BrightnessViewController.h"

@interface MainViewController ()

@end

@implementation MainViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}
- (IBAction)brightnessAction:(id)sender {
    BrightnessViewController *brightnessViewController = [[BrightnessViewController alloc] init];
    [self.navigationController pushViewController:brightnessViewController animated:YES];
    
}
- (IBAction)croppingAction:(id)sender {
}
- (IBAction)filterAction:(id)sender {
}
- (IBAction)inclineAction:(id)sender {
}
- (IBAction)resizeAction:(id)sender {
}
- (IBAction)scalingAction:(id)sender {
}

@end
