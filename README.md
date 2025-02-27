# PopGestureHandler 🚀
![iOS Version](https://img.shields.io/badge/iOS-13%2B-blue)
![License](https://img.shields.io/badge/license-MIT-green)
![Swift Version](https://img.shields.io/badge/Swift-5%20Compatible-orange)
![Version](https://img.shields.io/badge/Version-1.1.0-ff69b4)

轻量级 iOS 手势控制器，支持多方向交互式关闭动画，完美兼容滚动视图冲突处理。✨

<img src="https://github.com/18840851520/PopGestureHandler/blob/main/PopGestureHandler/GIF/_SimulatorScreenRecordingiPhone1420250227at10._1.gif" width="250" alt="手势演示动图"/> 
*（建议替换为实际动图演示[1](@ref)）*

## 🌟 核心特性
- 支持 ​**双向手势**​（向下滑动/向右滑动）
- 智能处理 ​**滚动视图冲突**​（UIScrollView 优先滚动）
- 可配置 ​**触发阈值**​（`interactivePopPading`）
- 可调节 ​**动画弹性参数**​（阻尼系数/初始速度）
- 支持 ​**抗锯齿优化**​（自动启用光栅化）
- 完善的 ​**资源释放机制**​（自动移除手势）

## 🛠 安装方式
### CocoaPods
```ruby
pod 'PopGestureHandler', '~> 1.1'
