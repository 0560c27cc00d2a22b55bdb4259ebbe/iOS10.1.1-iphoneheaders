/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPLoadableFonts : NSObject {

	TSWPLoadableFontInfo* _loadableFonts;
	unsigned _loadableFontCount;
	BOOL _allFontsLoaded;

}
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
-(void)backgroundLoadAll;
-(void)loadFontWithName:(id)arg1 ;
-(void)loadAll;
-(void)p_loadFontWithInfo:(TSWPLoadableFontInfo*)arg1 ;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

