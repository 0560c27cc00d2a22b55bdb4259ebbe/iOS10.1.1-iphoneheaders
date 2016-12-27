/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString, SALocalSearchBusiness2;

@interface SAMovieV2MovieListSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * movieListCells; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) SALocalSearchBusiness2 * theater; 
@property (nonatomic,copy) NSString * title; 
+(id)movieListSnippet;
+(id)movieListSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SALocalSearchBusiness2 *)theater;
-(void)setTheater:(SALocalSearchBusiness2 *)arg1 ;
-(NSArray *)movieListCells;
-(void)setMovieListCells:(NSArray *)arg1 ;
@end

