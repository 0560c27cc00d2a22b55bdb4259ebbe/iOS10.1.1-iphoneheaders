/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNCapabilities.h>

@protocol CNCapabilities <NSObject>
@property (nonatomic,readonly) BOOL areTelephonyCallsSupported; 
@property (nonatomic,readonly) BOOL isiMessageSupported; 
@property (nonatomic,readonly) BOOL isFaceTimeVideoSupported; 
@property (nonatomic,readonly) BOOL isFaceTimeAudioSupported; 
@required
-(BOOL)isFaceTimeVideoSupported;
-(BOOL)areTelephonyCallsSupported;
-(BOOL)isiMessageSupported;
-(BOOL)isFaceTimeAudioSupported;

@end


@class NSString;

@interface CNCapabilities : NSObject <CNCapabilities>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL areTelephonyCallsSupported; 
@property (nonatomic,readonly) BOOL isiMessageSupported; 
@property (nonatomic,readonly) BOOL isFaceTimeVideoSupported; 
@property (nonatomic,readonly) BOOL isFaceTimeAudioSupported; 
-(BOOL)isFaceTimeVideoSupported;
-(BOOL)areTelephonyCallsSupported;
-(BOOL)isiMessageSupported;
-(BOOL)isFaceTimeAudioSupported;
@end

