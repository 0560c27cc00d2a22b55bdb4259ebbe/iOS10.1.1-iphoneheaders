/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PublishingBundles/PublishToYouku.bundle/PublishToYouku
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoUpload/VUPublishPost.h>
#import <libobjc.A.dylib/JSONHTTPRequestDelegate.h>

@class YoukuAuthenticatedRequest, VUFileUpload, NSString, NSNumber, NSArray, VUCategory;

@interface YoukuPublishPost : VUPublishPost <JSONHTTPRequestDelegate> {

	YoukuAuthenticatedRequest* _currentRequest;
	VUFileUpload* _file;
	int _uploadState;
	NSString* _uploadHost;
	NSString* _uploadToken;
	NSNumber* _sliceTaskID;
	long long _offset;
	int _length;
	long long _transferred;
	BOOL _finished;
	NSString* _uploadServerIP;
	NSString* _filePath;
	NSString* _title;
	NSString* _postDescription;
	NSArray* _tags;
	VUCategory* _category;
	unsigned long long _accessType;

}

@property (nonatomic,retain) NSString * filePath;                        //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * postDescription;                 //@synthesize postDescription=_postDescription - In the implementation block
@property (nonatomic,retain) NSArray * tags;                             //@synthesize tags=_tags - In the implementation block
@property (nonatomic,retain) VUCategory * category;                      //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) unsigned long long accessType;              //@synthesize accessType=_accessType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_uploadCreate;
-(id)_URLForJSONAction:(id)arg1 ;
-(void)_check;
-(void)_uploadSlice;
-(id)_verifyParameters;
-(void)_newSlice;
-(id)_URLForUploadAction:(id)arg1 ;
-(id)_publicType;
-(void)_createFile;
-(NSArray *)tags;
-(void)_errorWithCode:(int)arg1 ;
-(NSString *)postDescription;
-(void)setTitle:(NSString *)arg1 ;
-(void)setCategory:(VUCategory *)arg1 ;
-(VUCategory *)category;
-(NSString *)title;
-(void)_commit;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(unsigned long long)accessType;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setTags:(NSArray *)arg1 ;
-(void)_handleResponse:(id)arg1 ;
-(void)startUpload;
-(void)setPostDescription:(NSString *)arg1 ;
-(id)_tags;
-(void)setAccessType:(unsigned long long)arg1 ;
-(void)request:(id)arg1 didReceiveObject:(id)arg2 ;
@end

