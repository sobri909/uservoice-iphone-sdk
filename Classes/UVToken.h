//
//  UVToken.h
//  UserVoice
//
//  Created by Scott Rutherford on 16/05/2010.
//  Copyright 2010 UserVoice Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UVBaseModel.h"

@class YOAuthToken;

@interface UVToken : UVBaseModel {
    YOAuthToken *oauthToken;
    NSString *type;
}

@property (nonatomic, retain) YOAuthToken *oauthToken;
@property (nonatomic, retain) NSString *type;

+ (BOOL)exists;
+ (id)getRequestTokenWithDelegate:(id)delegate;
+ (id)getAccessTokenWithDelegate:(id)delegate andEmail:(NSString *)email andPassword:(NSString *)password;

- (id)initWithExisting;
- (id)initWithDictionary:(NSDictionary *)dict;
- (id)revoke:(id) delegate;

- (void)persist;
- (void)remove;


@end
