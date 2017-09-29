//
//  CTMediator+Author.h
//  MXAuthorKit_Category
//
//  Created by Micheal Xiao on 2017/9/29.
//



#import <UIKit/UIKit.h>

#import <CTMediator/CTMediator.h>

#import <MXAPIsKit/APIRequest.h>

@interface CTMediator (Author)

- (UIViewController*)authorDetailViewController;

- (NSDictionary*)authorReformerWithOriginData:(NSDictionary*)data;

- (NSDictionary *)authorReformer;

- (APIRequest*)authorAPIRequest;

@end

