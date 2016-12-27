/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonChatItem.h>

@class NSArray, IMMessage;

@interface CKMessagePartChatItem : CKBalloonChatItem {

	NSArray* _visibleAssociatedMessageChatItems;

}

@property (nonatomic,copy,readonly) NSArray * messageAcknowledgments; 
@property (nonatomic,readonly) IMMessage * message; 
@property (nonatomic,readonly) char color; 
@property (nonatomic,copy,readonly) NSArray * pasteboardItems; 
@property (nonatomic,readonly) NSArray * visibleAssociatedMessageChatItems;              //@synthesize visibleAssociatedMessageChatItems=_visibleAssociatedMessageChatItems - In the implementation block
@property (nonatomic,readonly) BOOL canSendMessageAcknowledgment; 
@property (nonatomic,readonly) NSRange messagePartRange; 
@property (nonatomic,readonly) BOOL hasMessageAcknowledgment; 
@property (nonatomic,readonly) BOOL hasStickers; 
-(id)description;
-(id)sender;
-(char)color;
-(BOOL)canCopy;
-(IMMessage *)message;
-(id)time;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(BOOL)isFromMe;
-(BOOL)failed;
-(void)configureBalloonView:(id)arg1 ;
-(id)composition;
-(NSRange)messagePartRange;
-(BOOL)canForward;
-(NSArray *)pasteboardItems;
-(BOOL)canSendAsTextMessage;
-(NSArray *)visibleAssociatedMessageChatItems;
-(BOOL)canSendMessageAcknowledgment;
-(BOOL)canAttachStickers;
-(BOOL)stickersSnapToPoint;
-(BOOL)hasMessageAcknowledgment;
-(id)votingCounts;
-(long long)selectedType;
-(NSArray *)messageAcknowledgments;
-(id)aggregateAcknowledgmentChatItem;
-(BOOL)shouldShowVotingView;
-(BOOL)hasStickers;
@end

