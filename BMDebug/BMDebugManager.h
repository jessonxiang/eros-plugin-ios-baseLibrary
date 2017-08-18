//
//  BMDebugWindow.h
//  BM-JYT
//
//  Created by 窦静轩 on 2017/3/10.
//  Copyright © 2017年 XHY. All rights reserved.
//

#ifdef DEBUG
#import <UIKit/UIKit.h>

@interface BMDebugManager : NSObject

//获得单例对象
+ (instancetype)shareInstance;

// 显示
- (void)show;
// 消失
- (void)dismiss;
@end
#endif
