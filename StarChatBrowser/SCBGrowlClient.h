//
//  SCBGrowlClient.h
//  StarChatBrowser
//
//  Created by slightair on 12/06/02.
//  Copyright (c) 2012 slightair. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Growl/Growl.h>

@interface SCBGrowlClient : NSObject <GrowlApplicationBridgeDelegate>

+ (id)sharedClient;
- (void)notifyNewMessageWithTitle:(NSString *)title description:(NSString *)description userInfo:(NSDictionary *)userInfo;

@end
