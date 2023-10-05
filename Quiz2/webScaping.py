import os
import requests
from urllib.parse import urlparse

def download_pdf(url, download_path):
    """
    Download a PDF from a URL and save it to a specified folder.
    
    Parameters:
        url (str): The URL of the PDF to download.
        download_path (str): The path where the PDF should be saved.
    """
    # Parse the URL to get the file name
    parsed_url = urlparse(url)
    file_name = os.path.basename(parsed_url.path)
    folder_name = file_name.rsplit('.', 1)[0]
    
    # Create the folder if it doesn't exist
    folder_path = os.path.join(download_path, folder_name)
    os.makedirs(folder_path, exist_ok=True)
    
    # Download the PDF


# Example usage
# Note: This code will not run in this notebook as internet access is disabled.
pdf_links = [
    "https://grader.nattee.net/problems/211/get_statement/d63_q2a_pair_gte.pdf",
    "https://grader.nattee.net/problems/333/get_statement/d65_q2a_no_move.pdf",
    "https://grader.nattee.net/problems/212/get_statement/d63_q2a_vector_mirror.pdf",
    "https://grader.nattee.net/problems/184/get_statement/d62_q2a_iterator_check.pdf",
    "https://grader.nattee.net/problems/231/get_statement/d64_q2a_vector_block_swap.pdf",
    "https://grader.nattee.net/problems/331/get_statement/d65_q2a_mitosis.pdf",
    "https://grader.nattee.net/problems/230/get_statement/d64_q12_stack_from_set.pdf",
    "https://grader.nattee.net/problems/185/get_statement/d62_q2a_multi_count.pdf",
    "https://grader.nattee.net/problems/213/get_statement/d63_q2b_vector_compress.pdf",
    "https://grader.nattee.net/problems/188/get_statement/d62_q2b_vector_insert_many.pdf",
    "https://grader.nattee.net/problems/237/get_statement/d64_q2b_vector_rotate.pdf",
    "https://grader.nattee.net/problems/339/get_statement/-home-dae-cafe_grader-judge-raw-d65_q2b_some_move-d65_q2b_vector_some_move.pdf",
    "https://grader.nattee.net/problems/214/get_statement/d63_q2b_stack_reserve.pdf",
    "https://grader.nattee.net/problems/189/get_statement/d62_q2b_stack_deep_push.pdf",
    "https://grader.nattee.net/problems/236/get_statement/d64_q2b_stack_distribute.pdf",
    "https://grader.nattee.net/problems/338/get_statement/d65_q2b_split_stack.pdf"
]
for url in pdf_links:
    download_pdf(url, '/Users/army/Documents/Intania/DataStruc/Quiz2/')
