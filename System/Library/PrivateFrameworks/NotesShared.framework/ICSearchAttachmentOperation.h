/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICSearchOperation.h>

@class ICAttachment;

@interface ICSearchAttachmentOperation : ICSearchOperation

@property (readonly) ICAttachment * attachment; 
-(ICAttachment *)attachment;
-(unsigned long long)relevanceByPerformingSearch;
-(id)initWithAttachment:(id)arg1 searchString:(id)arg2 ;
@end

