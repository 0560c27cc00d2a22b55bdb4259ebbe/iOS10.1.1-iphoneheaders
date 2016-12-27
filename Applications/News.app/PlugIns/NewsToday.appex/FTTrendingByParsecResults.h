/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@protocol NSSecureCodingNSCopying;
@class NSDate, NSArray, NSDictionary, NSObject;

@interface FTTrendingByParsecResults : NSObject <NSCoding> {

	NSDate* _fetchedDate;
	NSArray* _articleIDs;
	NSDictionary* _headlineEventTrackingElementsByArticleID;
	NSObject*<NSSecureCoding>*<NSCopying> _sectionEventTrackingElement;

}

@property (nonatomic,copy) NSDate * fetchedDate;                                                           //@synthesize fetchedDate=_fetchedDate - In the implementation block
@property (nonatomic,copy) NSArray * articleIDs;                                                           //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * headlineEventTrackingElementsByArticleID;                        //@synthesize headlineEventTrackingElementsByArticleID=_headlineEventTrackingElementsByArticleID - In the implementation block
@property (nonatomic,copy) NSObject*<NSSecureCoding>*<NSCopying> sectionEventTrackingElement;              //@synthesize sectionEventTrackingElement=_sectionEventTrackingElement - In the implementation block
-(NSDictionary *)headlineEventTrackingElementsByArticleID;
-(NSObject*<NSSecureCoding>*<NSCopying>)sectionEventTrackingElement;
-(void)setFetchedDate:(NSDate *)arg1 ;
-(void)setHeadlineEventTrackingElementsByArticleID:(NSDictionary *)arg1 ;
-(void)setSectionEventTrackingElement:(NSObject*<NSSecureCoding>*<NSCopying>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)fetchedDate;
-(NSArray *)articleIDs;
-(void)setArticleIDs:(NSArray *)arg1 ;
@end

