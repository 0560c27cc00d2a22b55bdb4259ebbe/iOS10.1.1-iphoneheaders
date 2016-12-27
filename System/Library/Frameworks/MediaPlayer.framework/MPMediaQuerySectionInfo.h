/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSArray* _sections;
	NSArray* _sectionIndexTitles;
	BOOL _hasUnknownSection;

}

@property (nonatomic,copy) NSArray * sectionIndexTitles; 
@property (nonatomic,copy,readonly) NSArray * sections;               //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL hasUnknownSection;                  //@synthesize hasUnknownSection=_hasUnknownSection - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)sectionIndexTitles;
-(NSArray *)sections;
-(unsigned long long)indexOfSectionForSectionIndexTitleAtIndex:(unsigned long long)arg1 ;
-(void)setSectionIndexTitles:(NSArray *)arg1 ;
-(BOOL)hasUnknownSection;
-(void)setHasUnknownSection:(BOOL)arg1 ;
@end

