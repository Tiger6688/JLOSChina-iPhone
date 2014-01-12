//
//  RCReplyModel.h
//  JLOSChina
//
//  Created by Lee jimney on 12/11/13.
//  Copyright (c) 2013 jimneylee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OSCReplyEntity.h"

@interface OSCReplyModel : NSObject
- (void)replyTopicId:(unsigned long)topicId
            body:(NSString*)body
             success:(void(^)(OSCReplyEntity* replyEntity))success
             failure:(void(^)(NSError *error))failure;
@end
