/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSArray, NSString;

@interface MediaSocialPostOperation : ISOperation {

	NSNumber* _accountID;
	NSArray* _attachments;
	NSString* _authorID;
	NSString* _authorType;
	NSArray* _contentItems;
	double _createTime;
	NSArray* _externalServiceDestinations;
	BOOL _isAttributed;
	long long _postIdentifier;
	/*^block*/id _resultBlock;
	NSString* _text;
	NSString* _userAgent;
	long long _postID;

}

@property (copy) id resultBlock; 
@property (assign,nonatomic) long long postID;              //@synthesize postID=_postID - In the implementation block
@property (copy) NSString * userAgent; 
-(long long)postID;
-(id)initWithPostEntity:(id)arg1 ;
-(id)_requestBodyDictionary;
-(id)_attachmentDictionaryWithAttachment:(id)arg1 ;
-(id)_targetDictionaryWithContentItem:(id)arg1 ;
-(id)_externalServiceDictionaryWithDestination:(id)arg1 ;
-(void)setPostID:(long long)arg1 ;
-(id)initWithPostDescription:(id)arg1 ;
-(void)run;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
@end

