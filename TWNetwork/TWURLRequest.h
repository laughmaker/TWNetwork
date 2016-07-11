//
//  LZAURLRequest.h
//  XiaoTu
//
//  Created by 何振东 on 15/6/30.
//  Copyright © 2015年 LeZhiAn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "TWUploadFile.h"


@interface TWURLRequest : NSObject <NSURLSessionDownloadDelegate>

/// 设置超时时间
//@property (assign, nonatomic) NSTimeInterval timeout;

/// 设置缓存策略
//@property (assign, nonatomic) NSURLRequestCachePolicy cachePolicy;

/// 设置请求方式
//@property (strong, nonatomic) NSString *httpMethod;

/// 类方法返回实例
+ (instancetype)request;

+ (void)get:(NSString *)urlPath params:(NSDictionary *)params completionHandler:(void (^) (id data, NSError *error))completionHandler;

/**
 *  POST请求
 *
 *  @param urlPath           请求地址
 *  @param params            请求参数
 *  @param tag               该请求标志位
 *  @param completionHandler 请求返回代理
 */
+ (void)post:(NSString *)urlPath params:(NSDictionary *)params completionHandler:(void (^)(id data, NSError *error))completionHandler;
+ (void)post:(NSString *)urlPath params:(NSDictionary *)params tag:(NSUInteger)tag completionHandler:(void (^)(id data, NSError *error, NSInteger tag))completionHandler;

/**
 *  同步请求
 *
 *  @param urlPath           请求地址
 *  @param params            请求参数
 *  @param completionHandler 返回代理
 */
+ (void)synchronousRequest:(NSString *)urlPath params:(NSDictionary *)params completionHandler:(void (^)(id data, NSError *error))completionHandler;

/**
 *  下载文件接口
 *
 *  @param fileUrl           要下载的文件链接地址
 *  @param toPath            将下载文件要存放的路径，包含文件包
 *  @param completionHandler 下载结束后的代理处理，若成功，则返回存储在本地的路径，失败返回错误处理
 *  @param progressHandler   下载进度的回调处理
 */
+ (void)downloadFile:(NSString *)fileUrl toPath:(NSString *)toPath completionHandler:(void (^)(NSString *aFilePath, NSError *error))completionHandler;
- (void)downloadFile:(NSString *)fileUrl toPath:(NSString *)toPath completionHandler:(void (^)(NSString *aFilePath, NSError *error))completionHandler progressHandler:(void (^)(CGFloat totalBytesSent, CGFloat totalBytes))progressHandler;


/**
 *  上传文件
 *
 *  @param files             文件数组，内部为XTFile对象
 *  @param params            附带传输的参数
 *  @param toPath            上传接口地址
 *  @param completionHandler 结束后的回调处理
 *  @param progressHandler   上传载进度的回调处理
 */
+ (void)uploadFiles:(NSArray *)files withParams:(NSDictionary *)params toPath:(NSString *)toPath completionHandler:(void (^)(id data, NSError *error))completionHandler;
- (void)uploadFiles:(NSArray *)files withParams:(NSDictionary *)params toPath:(NSString *)toPath completionHandler:(void (^)(id data, NSError *error))completionHandler progressHandler:(void (^)(CGFloat totalBytesSent, CGFloat totalBytes))progressHandler;

@end
