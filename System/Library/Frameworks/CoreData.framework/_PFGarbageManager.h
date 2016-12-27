/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSMutableDictionary;

@interface _PFGarbageManager : NSObject {

	NSMutableDictionary* _storeLinksDirs;
	NSMutableDictionary* _filesToCleanUp;

}
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)defaultInstance;
-(id)_init__;
-(void)_deleteIfNecessary:(id)arg1 ;
-(void)_doCleanupForDir:(id)arg1 exceptURLs:(id)arg2 ;
-(BOOL)registerURLForCleanup:(id)arg1 ;
-(id)temporaryLinksDirectoryForStore:(id)arg1 ;
-(void)doCleanupForURL:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
@end

