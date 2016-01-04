//
//  ViewController.h
//  DrawWords
//
//  Created by xiaogu on 16/1/4.
//  Copyright © 2016年 leon yue. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    CALayer *_animationLayer;
    CAShapeLayer *_pathLayer;
    CALayer *_penLayer;
}

@property (nonatomic, retain) CALayer *animationLayer;
@property (nonatomic, retain) CAShapeLayer *pathLayer;
@property (nonatomic, retain) CALayer *penLayer;

- (IBAction) replayButtonTapped:(id)sender;
- (IBAction) drawingTypeSelectorTapped:(id)sender;

@end

