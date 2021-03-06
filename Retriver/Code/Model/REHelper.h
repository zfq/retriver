//
//  REHelper.h
//  Retriver
//
//  Created by cyan on 2016/10/21.
//  Copyright © 2016年 cyan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface REHelper : NSObject

+ (NSArray *)installedApplications;

+ (NSArray *)installedPlugins;

+ (NSString *)displayNameForApplication:(id)app;

+ (UIImage *)iconImageForApplication:(id)app;

+ (void)openApplication:(id)app;

+ (void)openGitHub;

+ (void)shareRetriver;

@end
