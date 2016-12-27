/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, NSString;

@interface IMGroupTitleChangeChatItem : IMTranscriptChatItem {

	IMHandle* _sender;

}

@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) IMHandle * sender;                  //@synthesize sender=_sender - In the implementation block
-(Class)__ck_chatItemClass;
-(NSString *)title;
-(IMHandle *)sender;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 ;
@end

