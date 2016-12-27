/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFTitleCardSection.h>

@class NSArray;

@interface SFNowPlayingCardSection : SFTitleCardSection {

	NSArray* _movies;

}

@property (nonatomic,copy) NSArray * movies;              //@synthesize movies=_movies - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)movies;
-(void)setMovies:(NSArray *)arg1 ;
@end

