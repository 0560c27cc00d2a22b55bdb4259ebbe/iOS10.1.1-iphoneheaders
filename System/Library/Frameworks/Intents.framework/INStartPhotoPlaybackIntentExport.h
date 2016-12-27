/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INDateComponentsRange, CLPlacemark, NSString, NSArray;


@protocol INStartPhotoPlaybackIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INDateComponentsRange * dateCreated; 
@property (nonatomic,copy) CLPlacemark * locationCreated; 
@property (nonatomic,copy) NSString * albumName; 
@property (nonatomic,copy) NSArray * searchTerms; 
@property (assign,nonatomic) unsigned long long includedAttributes; 
@property (assign,nonatomic) unsigned long long excludedAttributes; 
@property (nonatomic,copy) NSArray * peopleInPhoto; 
@required
-(id)init;
-(INDateComponentsRange *)dateCreated;
-(NSString *)albumName;
-(void)setAlbumName:(id)arg1;
-(void)setDateCreated:(id)arg1;
-(NSArray *)searchTerms;
-(void)setLocationCreated:(id)arg1;
-(void)setSearchTerms:(id)arg1;
-(void)setIncludedAttributes:(unsigned long long)arg1;
-(void)setExcludedAttributes:(unsigned long long)arg1;
-(void)setPeopleInPhoto:(id)arg1;
-(CLPlacemark *)locationCreated;
-(NSArray *)peopleInPhoto;
-(unsigned long long)includedAttributes;
-(unsigned long long)excludedAttributes;

@end

