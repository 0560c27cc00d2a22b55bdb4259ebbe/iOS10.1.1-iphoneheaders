/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, SKUIMediaSocialAuthor, NSURL, MSCLStoreItem;

@interface MSCLConfiguration : NSObject <NSCopying> {

	NSArray* _allowedExternalServices;
	NSArray* _audioCategoryNames;
	SKUIMediaSocialAuthor* _authorForActiveAccount;
	NSURL* _baseTagLookupURL;
	MSCLStoreItem* _item;
	long long _maximumNumberOfAttachments;
	double _maximumSoundBiteDuration;
	NSArray* _potentalAuthors;
	NSArray* _suggestedTags;
	BOOL _allowsCamera;
	BOOL _allowsMicrophone;

}

@property (nonatomic,copy) NSArray * allowedExternalServices;                           //@synthesize allowedExternalServices=_allowedExternalServices - In the implementation block
@property (nonatomic,copy) NSArray * audioCategoryNames;                                //@synthesize audioCategoryNames=_audioCategoryNames - In the implementation block
@property (nonatomic,copy) SKUIMediaSocialAuthor * authorForActiveAccount;              //@synthesize authorForActiveAccount=_authorForActiveAccount - In the implementation block
@property (nonatomic,copy) MSCLStoreItem * item;                                        //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfAttachments;                      //@synthesize maximumNumberOfAttachments=_maximumNumberOfAttachments - In the implementation block
@property (assign,nonatomic) double maximumSoundBiteDuration;                           //@synthesize maximumSoundBiteDuration=_maximumSoundBiteDuration - In the implementation block
@property (assign,nonatomic) BOOL allowsCamera;                                         //@synthesize allowsCamera=_allowsCamera - In the implementation block
@property (assign,nonatomic) BOOL allowsMicrophone;                                     //@synthesize allowsMicrophone=_allowsMicrophone - In the implementation block
@property (nonatomic,copy) NSArray * potentalAuthors;                                   //@synthesize potentalAuthors=_potentalAuthors - In the implementation block
@property (nonatomic,copy) NSArray * suggestedTags;                                     //@synthesize suggestedTags=_suggestedTags - In the implementation block
-(id)init;
-(MSCLStoreItem *)item;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItem:(MSCLStoreItem *)arg1 ;
-(void)setAllowsMicrophone:(BOOL)arg1 ;
-(void)setAllowsCamera:(BOOL)arg1 ;
-(NSArray *)audioCategoryNames;
-(id)authorsForSharing;
-(SKUIMediaSocialAuthor *)authorForActiveAccount;
-(NSArray *)allowedExternalServices;
-(NSArray *)potentalAuthors;
-(long long)maximumNumberOfAttachments;
-(BOOL)allowsCamera;
-(BOOL)allowsMicrophone;
-(void)setPotentalAuthors:(NSArray *)arg1 ;
-(void)setAuthorForActiveAccount:(SKUIMediaSocialAuthor *)arg1 ;
-(void)setAllowedExternalServices:(NSArray *)arg1 ;
-(void)setAudioCategoryNames:(NSArray *)arg1 ;
-(void)setTagLookupBaseURL:(id)arg1 ;
-(void)setMaximumSoundBiteDuration:(double)arg1 ;
-(double)maximumSoundBiteDuration;
-(NSArray *)suggestedTags;
-(id)tagLookupURLWithTag:(id)arg1 ;
-(void)setMaximumNumberOfAttachments:(long long)arg1 ;
-(void)setSuggestedTags:(NSArray *)arg1 ;
@end

