/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSMergePolicy.h>

@interface NoteResurrectionMergePolicy : NSMergePolicy
+(id)sharedNoteResurrectionMergePolicy;
-(id)snapshotFromRecord:(id)arg1 ;
-(id)localStoreForNote:(id)arg1 ;
-(BOOL)accountExists:(id)arg1 ;
-(BOOL)resolveConflicts:(id)arg1 error:(id*)arg2 ;
@end

