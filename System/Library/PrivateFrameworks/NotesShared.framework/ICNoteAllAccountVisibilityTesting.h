/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICNoteVisibilityTesting.h>

@class NSString;

@interface ICNoteAllAccountVisibilityTesting : NSObject <ICNoteVisibilityTesting>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)predicateForSearchableAttachments;
-(id)predicateForSearchableNotes;
-(BOOL)supportsVisibilityTestingType:(long long)arg1 ;
@end

