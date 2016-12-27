/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <NewsToday/FTHeadlineProviding.h>

@protocol NSCopyingNSSecureCoding;
@class NSString, NSDate, UIImage, NSURL, NSObject;

@interface FTHeadline : NSObject <FTHeadlineProviding> {

	BOOL _paid;
	NSString* _title;
	NSDate* _publishDate;
	NSString* _sourceName;
	UIImage* _sourceNameImage;
	UIImage* _thumbnail;
	NSURL* _actionURL;
	NSString* _storyType;
	NSObject*<NSCopying>*<NSSecureCoding> _eventTrackingElement;
	NSObject*<NSCopying>*<NSSecureCoding> _identifier;

}

@property (nonatomic,copy) NSObject*<NSCopying>*<NSSecureCoding> identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDate * publishDate;                                                    //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,copy) NSString * sourceName;                                                   //@synthesize sourceName=_sourceName - In the implementation block
@property (nonatomic,retain) UIImage * sourceNameImage;                                             //@synthesize sourceNameImage=_sourceNameImage - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                                                   //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,copy) NSURL * actionURL;                                                       //@synthesize actionURL=_actionURL - In the implementation block
@property (assign,getter=isPaid,nonatomic) BOOL paid;                                               //@synthesize paid=_paid - In the implementation block
@property (nonatomic,copy) NSString * storyType;                                                    //@synthesize storyType=_storyType - In the implementation block
@property (nonatomic,copy) NSObject*<NSCopying>*<NSSecureCoding> eventTrackingElement;              //@synthesize eventTrackingElement=_eventTrackingElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEventTrackingElement:(NSObject*<NSCopying>*<NSSecureCoding>)arg1 ;
-(NSObject*<NSCopying>*<NSSecureCoding>)eventTrackingElement;
-(void)setSourceNameImage:(UIImage *)arg1 ;
-(void)setPaid:(BOOL)arg1 ;
-(UIImage *)sourceNameImage;
-(NSURL *)actionURL;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSObject*<NSCopying>*<NSSecureCoding>)identifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSObject*<NSCopying>*<NSSecureCoding>)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(NSString *)sourceName;
-(void)setSourceName:(NSString *)arg1 ;
-(NSDate *)publishDate;
-(void)setPublishDate:(NSDate *)arg1 ;
-(NSString *)storyType;
-(BOOL)isPaid;
-(void)setStoryType:(NSString *)arg1 ;
-(void)setActionURL:(NSURL *)arg1 ;
@end

