/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage, NSURL, NSUUID;

@interface MFMessagePayload : NSObject <NSSecureCoding> {

	NSString* _text;
	UIImage* _image;
	NSURL* _mediaURL;
	NSURL* _URL;
	NSString* _statusText;
	NSString* _accessibilityLabel;
	NSString* _changeSummaryText;
	NSUUID* _sessionIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                               //@synthesize mediaURL=_mediaURL - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                    //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * statusText;                            //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;                    //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,copy) NSString * changeSummaryText;                     //@synthesize changeSummaryText=_changeSummaryText - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)sessionIdentifier;
-(UIImage *)image;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(id)initWithSessionIdentifier:(id)arg1 ;
-(NSString *)changeSummaryText;
-(void)setChangeSummaryText:(NSString *)arg1 ;
-(void)setMediaURL:(NSURL *)arg1 ;
-(NSString *)statusText;
-(NSURL *)mediaURL;
-(void)setStatusText:(NSString *)arg1 ;
@end

