/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber, NSArray;


@protocol BKSeriesDataItem <NSObject>
@property (nonatomic,readonly) NSString * series_adamId; 
@property (nonatomic,readonly) NSString * series_sortTitle; 
@property (nonatomic,readonly) NSString * series_title; 
@property (nonatomic,readonly) NSString * series_sortAuthor; 
@property (nonatomic,readonly) NSString * series_author; 
@property (nonatomic,readonly) NSNumber * series_isExplicit; 
@property (nonatomic,readonly) NSString * series_formattedPrice; 
@property (nonatomic,readonly) NSArray * series_genres; 
@property (nonatomic,readonly) NSString * series_genre; 
@required
-(NSArray *)series_genres;
-(NSString *)series_genre;
-(NSString *)series_adamId;
-(NSString *)series_sortTitle;
-(NSString *)series_sortAuthor;
-(NSString *)series_title;
-(NSString *)series_author;
-(NSNumber *)series_isExplicit;
-(NSString *)series_formattedPrice;

@end

