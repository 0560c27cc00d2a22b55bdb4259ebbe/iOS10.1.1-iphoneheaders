/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSULRUCache, NSArray, NSMutableDictionary, NSMutableArray, NSString, NSDictionary, NSMutableSet, NSSet;

@interface TSWPFontCache : NSObject {

	TSULRUCache* _fontCache;
	NSArray* _familyNames;
	NSMutableDictionary* _familyDisplayNames;
	NSArray* _familyFonts;
	NSMutableArray* _cachedAvailableMembers;
	NSString* _cachedMembersFamilyName;
	NSArray* _cachedRecentFontNames;
	NSDictionary* _familyToFontLookup;
	NSMutableSet* _missingFonts;

}

@property (nonatomic,readonly) NSSet * missingFonts; 
+(void)reset;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedCache;
+(id)_singletonAlloc;
-(CTFontRef)createFontWithName:(id)arg1 size:(double)arg2 ;
-(BOOL)isFontMissing:(id)arg1 ;
-(void)addMissingFonts:(id)arg1 ;
-(id)displayNameForFontFamily:(id)arg1 ;
-(void)p_FontWasDownloaded:(id)arg1 ;
-(id)p_excludedFamilyNames;
-(id)sortedFontFamilies;
-(id)fontNameForFailyName:(id)arg1 ;
-(id)recentFontNames;
-(id)fontFamilyToTSWPFontLookup;
-(void)removeMissingFonts:(id)arg1 ;
-(id)sortedFontFamilyEntriesForStylesheet:(id)arg1 ;
-(id)availableMembersOfFontFamily:(id)arg1 ;
-(id)recentFonts;
-(BOOL)registerRecentFont:(id)arg1 ;
-(NSSet *)missingFonts;
-(id)init;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

