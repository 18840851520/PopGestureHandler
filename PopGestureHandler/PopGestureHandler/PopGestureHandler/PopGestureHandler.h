//
//  PopGestureHandler.h
// /Users/web/Documents/GitHub/PopGestureHandler/PopGestureHandler.podspec Ugram
//
//  Created by zjh on 2025/2/25.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// GestureHandler.h
typedef NS_OPTIONS(NSUInteger, GestureDirection) {
    GestureDirectionNone   = 0,      // 无方向
    GestureDirectionRight  = 1 << 0, // 右滑
    GestureDirectionDown   = 1 << 1  // 下滑
    // 可扩展其他方向（如左滑、上滑）
};

@interface PopGestureHandler : NSObject
/// 初始化方法
/// @param view 绑定手势的视图
/// @param directions 支持的手势方向集合（@[GestureDirectionRight, GestureDirectionDown]）
/// @param interactivePopPading 触发区域比例（0~1）
/// @param interactivePopClosedPading 触发完成阈值比例（0~1）
- (instancetype)initWithView:(UIView *)view
                  directions:(GestureDirection)directions
        interactivePopPading:(CGFloat)interactivePopPading
     interactivePopClosedPading:(CGFloat)interactivePopClosedPading;

/// 手势动画开始回调（超过阈值时触发）
@property (nonatomic, copy) void (^animateViewToBeginBlock)(void);
/// 手势动画完成方法回调
@property (nonatomic, copy) void (^animateViewToCompletion)(void);
/// 手势完成回调（超过阈值时触发）
@property (nonatomic, copy) void (^gestureCompletion)(void);

@end

NS_ASSUME_NONNULL_END
