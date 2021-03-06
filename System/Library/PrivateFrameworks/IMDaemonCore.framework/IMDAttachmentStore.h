/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDAttachmentStore : NSObject
+(id)sharedInstance;
-(BOOL)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2 ;
-(id)attachmentWithGUID:(id)arg1 ;
-(BOOL)updateAttachment:(id)arg1 ;
-(BOOL)removeAttachment:(id)arg1 fromMessageWithGUID:(id)arg2 ;
-(BOOL)deleteAttachmentsWithGUIDs:(id)arg1 ;
-(BOOL)deleteAttachmentDataForTransfer:(id)arg1 ;
-(BOOL)deleteAttachmentWithGUID:(id)arg1 ;
@end

