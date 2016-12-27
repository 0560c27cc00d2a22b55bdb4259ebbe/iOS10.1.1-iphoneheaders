/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMFSABaseModel.h>

@class SAFmfLocation, UIImage;

@interface FMFSALocation : FMFSABaseModel {

	SAFmfLocation* siriLocation;
	UIImage* _cachedFriendImage;

}

@property (nonatomic,retain) UIImage * cachedFriendImage;               //@synthesize cachedFriendImage=_cachedFriendImage - In the implementation block
@property (nonatomic,retain) SAFmfLocation * siriLocation; 
+(id)locationWithSiriLocation:(id)arg1 ;
+(id)friendImageForSAPerson:(id)arg1 ;
+(id)friendImageForPersonAttribute:(id)arg1 ;
+(id)locationWithHandle:(id)arg1 saPerson:(id)arg2 andDictionary:(id)arg3 ;
+(id)bundle;
-(UIImage *)cachedFriendImage;
-(void)setSiriLocation:(SAFmfLocation *)arg1 ;
-(id)initWithSiriLocation:(id)arg1 ;
-(id)unformatPhoneNumber:(id)arg1 ;
-(id)distanceCalculator;
-(id)friendHandlePretty;
-(void)setCachedFriendImage:(UIImage *)arg1 ;
-(id)personForPhoneFromContacts:(id)arg1 ;
-(id)unformattedHandle;
-(id)personForEmailFromContacts:(id)arg1 ;
-(id)friendLocation:(BOOL)arg1 ;
-(id)friendImage;
-(id)prettyTimestamp;
-(id)friendHandle;
-(id)friendEmail;
-(id)friendName;
-(id)friendPhone;
-(SAFmfLocation *)siriLocation;
-(void)decodeHandle:(id)arg1 saPerson:(id)arg2 withDictionary:(id)arg3 ;
-(id)initWithHandle:(id)arg1 saPerson:(id)arg2 andDictionary:(id)arg3 ;
-(id)numberFormatter;
-(BOOL)hasCoordinate;
-(id)distanceFromLocation:(id)arg1 ;
-(BOOL)isPhone;
-(id)formatPhoneNumber:(id)arg1 ;
@end
