/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFAttachmentDataProviderProtocol.h>

@class NSMutableDictionary, NSCache, NSString;

@interface MFComposeAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol> {

	NSMutableDictionary* _attachmentsData;
	NSCache* _attachmentsPlaceholderData;
	NSMutableDictionary* _attachmentsPasteboardData;
	NSMutableDictionary* _attachmentsUndoData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)fetchLocalDataForAttachment:(id)arg1 ;
-(void)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)messageForAttachment:(id)arg1 ;
-(id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2 ;
-(void)addData:(id)arg1 forContentID:(id)arg2 ;
-(id)dataForContentID:(id)arg1 ;
-(id)rawDataForContentID:(id)arg1 ;
-(id)_dataForAttachment:(id)arg1 ;
-(id)initWithData:(id)arg1 forContentID:(id)arg2 ;
-(void)removeDataForAttachment:(id)arg1 ;
-(void)recordPasteboardDataForAttachments:(id)arg1 ;
-(void)recordUndoDataForAttachments:(id)arg1 ;
@end

