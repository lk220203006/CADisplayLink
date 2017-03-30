//
//  YDWaveLoadingView.h
//  CADisplayLink1
//
//  Created by lgq on 2016/12/2.
//  Copyright © 2016年 liukun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YDWaveLoadingView : UIView

+ (instancetype)loadingView;

- (void)startLoading;

- (void)stopLoading;

@end
