/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFCardSection.h>

@class NSString, NSNumber, SFImage, SFRichText;

@interface SFSocialMediaPostCardSection : SFCardSection {

	BOOL _nameNoWrap;
	NSString* _name;
	NSNumber* _nameMaxLines;
	NSString* _handle;
	SFImage* _verifiedGlyph;
	SFImage* _profilePicture;
	SFRichText* _post;
	SFImage* _picture;
	NSString* _timestamp;
	NSString* _footnote;

}

@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL nameNoWrap;                       //@synthesize nameNoWrap=_nameNoWrap - In the implementation block
@property (nonatomic,copy) NSNumber * nameMaxLines;                 //@synthesize nameMaxLines=_nameMaxLines - In the implementation block
@property (nonatomic,copy) NSString * handle;                       //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) SFImage * verifiedGlyph;               //@synthesize verifiedGlyph=_verifiedGlyph - In the implementation block
@property (nonatomic,retain) SFImage * profilePicture;              //@synthesize profilePicture=_profilePicture - In the implementation block
@property (nonatomic,retain) SFRichText * post;                     //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) SFImage * picture;                     //@synthesize picture=_picture - In the implementation block
@property (nonatomic,copy) NSString * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * footnote;                     //@synthesize footnote=_footnote - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)timestamp;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setTimestamp:(NSString *)arg1 ;
-(void)setFootnote:(NSString *)arg1 ;
-(SFImage *)picture;
-(void)setPicture:(SFImage *)arg1 ;
-(NSString *)footnote;
-(void)setHandle:(NSString *)arg1 ;
-(NSString *)handle;
-(SFRichText *)post;
-(SFImage *)profilePicture;
-(SFImage *)verifiedGlyph;
-(BOOL)nameNoWrap;
-(NSNumber *)nameMaxLines;
-(void)setNameNoWrap:(BOOL)arg1 ;
-(void)setNameMaxLines:(NSNumber *)arg1 ;
-(void)setVerifiedGlyph:(SFImage *)arg1 ;
-(void)setProfilePicture:(SFImage *)arg1 ;
-(void)setPost:(SFRichText *)arg1 ;
@end

