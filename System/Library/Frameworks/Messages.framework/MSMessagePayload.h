/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messages/MSMessage.h>

@class NSString, NSUUID;

@interface MSMessagePayload : MSMessage

@property (nonatomic,copy) NSString * changeSummaryText; 
@property (nonatomic,copy,readonly) NSUUID * sessionIdentifier; 
-(NSUUID *)sessionIdentifier;
-(NSString *)changeSummaryText;
-(void)setChangeSummaryText:(NSString *)arg1 ;
@end

