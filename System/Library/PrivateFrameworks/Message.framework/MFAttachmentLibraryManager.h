/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFAttachmentComposeManager.h>

@interface MFAttachmentLibraryManager : MFAttachmentComposeManager
-(void)dealloc;
-(void)removeProviderForBaseURL:(id)arg1 ;
-(id)attachmentsForMessage:(id)arg1 withSchemes:(id)arg2 ;
-(id)_dataProviderForAttachmentURL:(id)arg1 error:(id*)arg2 ;
-(void)_messageAttachmentStorageLocationsDidChangeNotification:(id)arg1 ;
-(id)initWithPrimaryLibrary:(id)arg1 ;
@end

