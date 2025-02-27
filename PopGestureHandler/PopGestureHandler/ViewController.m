//
//  ViewController.m
//  PopGestureHandler
//
//  Created by zjh on 2025/2/27.
//

#import "ViewController.h"
#import "PresentViewController.h"
#import "PopGestureHandler.h"

@interface ViewController ()

@property (nonatomic, strong) PopGestureHandler *popHanlder;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    __block PresentViewController *presentVC = [[PresentViewController alloc] init];
    [self presentViewController:presentVC animated:true completion:nil];
    
    _popHanlder = [[PopGestureHandler alloc] initWithView:presentVC.view directions:GestureDirectionDown | GestureDirectionRight interactivePopPading:0.2 interactivePopClosedPading:0.5];
    _popHanlder.gestureCompletion = ^{
        [presentVC dismissViewControllerAnimated:false completion:nil];
        presentVC = nil;
    };
}


@end
