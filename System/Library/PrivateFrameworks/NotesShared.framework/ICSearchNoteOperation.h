/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICSearchOperation.h>

@class ICNote;

@interface ICSearchNoteOperation : ICSearchOperation

@property (nonatomic,readonly) ICNote * note; 
-(unsigned long long)relevanceByPerformingSearch;
-(id)initWithNote:(id)arg1 searchString:(id)arg2 ;
-(ICNote *)note;
@end

