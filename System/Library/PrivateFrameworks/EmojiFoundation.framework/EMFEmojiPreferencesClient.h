/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmojiFoundation/EMFEmojiPreferences.h>

@class NSXPCConnection, NSString;

@interface EMFEmojiPreferencesClient : EMFEmojiPreferences {

	NSXPCConnection* _connection;
	BOOL _isValid;
	NSString* _machName;

}

@property (nonatomic,retain) NSString * machName;              //@synthesize machName=_machName - In the implementation block
@property (assign,nonatomic) BOOL isValid;                     //@synthesize isValid=_isValid - In the implementation block
+(id)serviceInterface;
-(void)dealloc;
-(BOOL)isValid;
-(id)initWithMachName:(id)arg1 ;
-(void)didUseEmoji:(id)arg1 usageMode:(id)arg2 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(NSString *)machName;
-(void)setMachName:(NSString *)arg1 ;
-(void)didUseEmoji:(id)arg1 ;
-(void)didViewEmojiIndex:(long long)arg1 forCategory:(id)arg2 ;
-(void)createConnectionIfNecessary;
@end

